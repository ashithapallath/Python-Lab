{
  "nbformat": 4,
  "nbformat_minor": 0,
  "metadata": {
    "colab": {
      "name": "Untitled14.ipynb",
      "provenance": [],
      "collapsed_sections": [],
      "authorship_tag": "ABX9TyMoOSztGIRdjPxLfp89OOp1",
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
        "<a href=\"https://colab.research.google.com/github/ashithapallath/Python-Lab/blob/main/python4.py\" target=\"_parent\"><img src=\"https://colab.research.google.com/assets/colab-badge.svg\" alt=\"Open In Colab\"/></a>"
      ]
    },
    {
      "cell_type": "code",
      "execution_count": null,
      "metadata": {
        "id": "R5bNnj2O7rqB"
      },
      "outputs": [],
      "source": [
        "#4.Develop a program to perform \n",
        " #a.define a function to check whether a number is happy or not\n",
        " #b.define a function to print all happy numbers within a range\n",
        " #c.define a function to print first N happy number\n",
        "a=int(input('enter a number'))\n",
        "def happy(a):\n",
        "    num=a\n",
        "    sum=ct=0\n",
        "    default=False\n",
        "    while ct<100:\n",
        "      ct+=1\n",
        "      while num!=0:\n",
        "        r=num%10\n",
        "        sum +=r*r\n",
        "        num=num//10\n",
        "        \n",
        "    \n",
        "      if sum==1: \n",
        "           default=True\n",
        "           break\n",
        "      else:\n",
        "           num=sum\n",
        "           sum=0\n",
        "      return default  \n",
        "    \n",
        "if happy(a) == True:\n",
        "    print('Happy')\n",
        "else:\n",
        "       \n",
        "        \n",
        "     print('Sad')\n",
        "def range():\n",
        "     ran1=int(input('enter starting range'))\n",
        "     ran2=int(input('enter ending range'))\n",
        "      \n",
        "     for i in range(ran1, ran2):\n",
        "       if happy(i)==True:\n",
        "         print (i)\n",
        "range()\n",
        "def n_happy():\n",
        "  n=int(input('enter how many happy members want to print'))\n",
        "  print(\"first\",n,\"happy numbers are:\")\n",
        "  i=0\n",
        "  while n!=0:\n",
        "    i +=1\n",
        "    if happy(i) ==True:\n",
        "      n-=1\n",
        "      print(i)\n",
        "\n",
        "n_happy()\n",
        "\n",
        "\n",
        "\n",
        "  \n",
        "\n",
        "\n",
        " "
      ]
    }
  ]
}