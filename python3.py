{
  "nbformat": 4,
  "nbformat_minor": 0,
  "metadata": {
    "colab": {
      "name": "Untitled13.ipynb",
      "provenance": [],
      "authorship_tag": "ABX9TyN6cvJFENejQNE97YE9W4IZ",
      "include_colab_link": true
    },
    "kernelspec": {
      "name": "python3",
      "display_name": "Python 3"
    },
    "language_info": {
      "name": "python"
    }
  },
  "cells": [
    {
      "cell_type": "markdown",
      "metadata": {
        "id": "view-in-github",
        "colab_type": "text"
      },
      "source": [
        "<a href=\"https://colab.research.google.com/github/ashithapallath/Python-Lab/blob/main/python3.py\" target=\"_parent\"><img src=\"https://colab.research.google.com/assets/colab-badge.svg\" alt=\"Open In Colab\"/></a>"
      ]
    },
    {
      "cell_type": "code",
      "execution_count": 1,
      "metadata": {
        "colab": {
          "base_uri": "https://localhost:8080/"
        },
        "id": "Nwh-p4400Jye",
        "outputId": "079108a1-fbab-4400-be03-f311c054462b"
      },
      "outputs": [
        {
          "output_type": "stream",
          "name": "stdout",
          "text": [
            "Enter a string:abcd\n",
            "Sub strings are:\n",
            "a\n",
            "ab\n",
            "abc\n",
            "abcd\n",
            "b\n",
            "bc\n",
            "bcd\n",
            "c\n",
            "cd\n",
            "d\n",
            "Enter value of the length:2\n",
            "ab\n",
            "bc\n",
            "cd\n",
            "Enter number of distinct charecters:3\n",
            "\n",
            "ab\n",
            "bc\n",
            "cd\n",
            "Not palindrome\n"
          ]
        }
      ],
      "source": [
        "#5.Develop a program to read a string and perform \n",
        " #.print all possible substring\n",
        " #.print all possoible substrings of length k\n",
        " #.print all possoible substrings of length k with N distinctcharacters\n",
        " #.print all paliandrome substrings\n",
        "str=input(\"Enter a string:\")\n",
        "def strings(str):\n",
        "  size=len(str)\n",
        "  print(\"Sub strings are:\")\n",
        "  for i in range(size):\n",
        "    for j in range(i,size):\n",
        "      print(str[i:j+1])\n",
        "strings(str)  \n",
        "k=int(input(\"Enter value of the length:\"))\n",
        "def length_string(str,k):\n",
        "  size=len(str)\n",
        "  for i in range(0,size+1):\n",
        "    for j in range(i+1,size+1):\n",
        "      s=str[i:j]\n",
        "      if len(s)==k:\n",
        "         print(s)\n",
        "length_string(str,k)\n",
        "n=int(input(\"Enter number of distinct charecters:\"))\n",
        "def n_distinct(str,k):\n",
        "  size=len(str)\n",
        "  print()\n",
        "  for i in range(0,size+1):\n",
        "    for j in range(i+1,size+1):\n",
        "       s=str[i:j]\n",
        "       distinct=set(s)\n",
        "       if len(s)==k:\n",
        "          if (len(distinct)==k):\n",
        "            print(s)\n",
        "n_distinct(str,k)\n",
        "def palindrome_string():\n",
        "  p=str[::-1]\n",
        "  if(p==str):\n",
        "     print(\"Palindrome of given string is:\",p)\n",
        "  else:\n",
        "      print(\"Not palindrome\")\n",
        "palindrome_string()\n"
      ]
    }
  ]
}