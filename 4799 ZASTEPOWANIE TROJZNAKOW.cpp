/*
POLISH SPOJ
http://pl.spoj.com/problems/WI_TRIGR/
*/
#include <iostream>
#include <string>

using namespace std;

int main()
{
    string text;

    while(getline(cin,text))
    {
        while (text.find("??=")!=string::npos){
        text.replace(text.find("??="), 3, "#");}
        while (text.find("??/")!=string::npos){
        text.replace(text.find("??/"), 3, "\\");}
        while (text.find("??'")!=string::npos){
        text.replace(text.find("??'"), 3, "^");}
        while (text.find("??(")!=string::npos){
        text.replace(text.find("??("), 3, "[");}
        while (text.find("??)")!=string::npos){
        text.replace(text.find("??)"), 3, "]");}
        while (text.find("??!")!=string::npos){
        text.replace(text.find("??!"), 3, "|");}
        while (text.find("??<")!=string::npos){
        text.replace(text.find("??<"), 3, "{");}
        while (text.find("??>")!=string::npos){
        text.replace(text.find("??>"), 3, "}");}
        while (text.find("??-")!=string::npos){
        text.replace(text.find("??-"), 3, "~");}
    }
    return 0;
}
