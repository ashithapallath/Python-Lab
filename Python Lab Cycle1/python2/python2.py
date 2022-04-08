{
  "nbformat": 4,
  "nbformat_minor": 0,
  "metadata": {
    "colab": {
      "name": "Untitled10.ipynb",
      "provenance": [],
      "authorship_tag": "ABX9TyOBcQWwHG4Elx3SdRlXcVzx",
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
        "<a href=\"https://colab.research.google.com/github/ashithapallath/Python-Lab/blob/main/python2.py\" target=\"_parent\"><img src=\"https://colab.research.google.com/assets/colab-badge.svg\" alt=\"Open In Colab\"/></a>"
      ]
    },
    {
      "cell_type": "code",
      "execution_count": 3,
      "metadata": {
        "id": "gadp_FyIuxIM",
        "colab": {
          "base_uri": "https://localhost:8080/"
        },
        "outputId": "d7a4942f-3c42-40d7-b523-34d0e4dfe4da"
      },
      "outputs": [
        {
          "output_type": "stream",
          "name": "stdout",
          "text": [
            "enter first side of  triangle4\n",
            "enter second side of   triangle6\n",
            "enter third side of  triangle2\n",
            "4 6 2\n",
            "Area  0.0\n",
            "enter first side of  triangle6\n",
            "enter second side of   triangle4\n",
            "enter third side of  triangle3\n",
            "6 4 3\n",
            "Area  5.332682251925386\n",
            "Cont 0.0\n",
            "Cont 100.0\n"
          ]
        }
      ],
      "source": [
        "#2.Develop a program to read the three sides of traingle....\n",
        "def side():\n",
        "  a=int(input('enter first side of  triangle')) #extract 1st side\n",
        "  b=int(input('enter second side of   triangle')) #extract second side\n",
        "  c=int(input('enter third side of  triangle'))  #extract third side\n",
        "  return a,b,c\n",
        "def area():\n",
        "  a,b,c=side()\n",
        "  print(a,b,c)\n",
        "  s=(a+b+c)*0.5\n",
        "  area=(s*(s-a)*(s-b)*(s-c))**0.5\n",
        "  \n",
        "  print('Area ',area)\n",
        "  return area  \n",
        "\n",
        "\n",
        "\n",
        "def contribution(): #function calling\n",
        "  a1=area()\n",
        "  a2=area()\n",
        "  c1=(a1/(a1+a2))*100\n",
        "  c2=100-c1\n",
        "  print('Cont',c1)\n",
        "  print('Cont',c2)\n",
        "  \n",
        "\n",
        "  \n",
        "\n",
        "contribution() #ending function\n",
        "\n",
        "\n",
        "\n"
      ]
    }
  ]
}