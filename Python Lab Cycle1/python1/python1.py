{
  "nbformat": 4,
  "nbformat_minor": 0,
  "metadata": {
    "colab": {
      "name": "python1.ipy",
      "provenance": [],
      "collapsed_sections": [],
      "authorship_tag": "ABX9TyPPgNae5iMo6jHFc4w0gbzK",
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
        "<a href=\"https://colab.research.google.com/github/ashithapallath/Python-Lab/blob/main/python1_ipy.py\" target=\"_parent\"><img src=\"https://colab.research.google.com/assets/colab-badge.svg\" alt=\"Open In Colab\"/></a>"
      ]
    },
    {
      "cell_type": "code",
      "execution_count": 1,
      "metadata": {
        "id": "WYaz_FN-oRus",
        "colab": {
          "base_uri": "https://localhost:8080/"
        },
        "outputId": "1bdf0bba-8a33-486a-ad9a-4c233acf1948"
      },
      "outputs": [
        {
          "output_type": "stream",
          "name": "stdout",
          "text": [
            "enter a four digit number1235\n",
            "sum= 10\n",
            "Reverse= 200\n",
            "Difference= -10\n"
          ]
        }
      ],
      "source": [
        "#1.Develop a program to read a four-digit number and find its \n",
        "#   a.sum of digits\n",
        "#   b.Reverse\n",
        "#   c. Difference between the product of digits at the odd position and the product of digits at the even position\n",
        "\n",
        "b=int(input('enter a four digit number'))\n",
        "digit4=b%10  #extract digit4\n",
        "b=b//10\n",
        "digit3=b%10  #extract digit3\n",
        "b=b//10\n",
        "digit2=b%10  #extract digit2\n",
        "b=b//10\n",
        "b=b//10\n",
        "digit1=b%10  #extract digit3\n",
        "b=b//10\n",
        "sum=digit1+digit2+digit3+digit4 #find sum of digits\n",
        "reverse=(digit1*1000)+(digit2*100)+(digit1*10) #finding the reverse\n",
        "difference=(digit1*digit3)-(digit2*digit4)     #finding Difference between the product of digits at the odd position and the product of digits at the even position\n",
        "print('sum=',sum)\n",
        "print('Reverse=',reverse)\n",
        "print('Difference=',difference)\n"
      ]
    }
  ]
}