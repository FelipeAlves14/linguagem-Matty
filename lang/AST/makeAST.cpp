#include <iostream>
#include <fstream>
#include <string>
#include "antlr4-runtime.h"
#include "./lang/MattyLexer.h"
#include "./lang/MattyParser.h"

using namespace antlr4;
using namespace std;

int main(int argc, const char *argv[])
{
    if (argc < 2)
    {
        cerr << "Passe um arquivo fonte com a sua linguagem como parâmetro." << endl;
        return 1;
    }

    try
    {
        ifstream readFile(argv[1]);
        if (!readFile)
        {
            cerr << "Erro ao abrir o arquivo: " << argv[1] << endl;
            return 1;
        }

        ANTLRInputStream fileInArray(readFile);
        MattyLexer lexer(&fileInArray);
        CommonTokenStream tokens(&lexer);
        MattyParser parser(&tokens);

        MattyParser::ProgramaContext *tree = parser.programa();

        cout << tree->toStringTree(&parser) << endl;
        cout << "Arquivo processado com sucesso." << endl;

        return 0;
    }
    catch (const std::exception &e)
    {
        cerr << "Exceção: " << e.what() << endl;
    }
    catch (...)
    {
        cerr << "Exceção desconhecida ao processar o arquivo." << endl;
    }

    return 1;
}