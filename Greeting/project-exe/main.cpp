#include "say-greetings/greeting.hpp"
#include<iostream>

int main(){
    greeting::say_greeting Hi("hello");
    std::cout<<Hi.str_return()<<std::endl;
}