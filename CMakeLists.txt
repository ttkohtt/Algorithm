# CMakeのバージョン指定
cmake_minimum_required(VERSION 3.23)

# プロジェクト名と言語の設定(プロジェクト名　言語名)
project(TEST C)

# 実行ファイルの作成(実行ファイル名　ソースファイル名1 ソースファイル名2 ...)
add_executable(test_app 
            test.c
            bubble_sort.c
            selection_sort.c)