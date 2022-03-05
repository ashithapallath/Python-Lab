{
  "nbformat": 4,
  "nbformat_minor": 0,
  "metadata": {
    "colab": {
      "name": "Untitled11.ipynb",
      "provenance": [],
      "collapsed_sections": [],
      "authorship_tag": "ABX9TyMqTRE/boy/uV7CSyCceqGO",
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
      "execution_count": null,
      "metadata": {
        "id": "z2l00NaJyOXH"
      },
      "outputs": [],
      "source": [
        "#Develop a program to read the employees' name,code,basicpay....\n",
        "def employee():\n",
        "  name=str(input(' enter name of employee'))\n",
        "  code=int(input(' enter code of employee'))\n",
        "  Bpay=int(input(' enter basic pay of employee'))\n",
        "  print('**********PAYMENT SLIP**********')\n",
        "  print('Name of the employee:',name)\n",
        "  print('Code of the employee:',code)\n",
        "  print('Basic pay of the employee',Bpay)\n",
        "  return name,code,Bpay\n",
        "\n",
        "def calculate():\n",
        "  name,code,Bpay=employee()\n",
        "  if Bpay<10000:\n",
        "    GrossSalary= (Bpay+5+2.5+500)\n",
        "    Deduction=(20+8+0)\n",
        "    Netsalary=(GrossSalary-Deduction)\n",
        "    print('Gross salary=',GrossSalary)\n",
        "    print('Deduction=',Deduction)\n",
        "    print('Net Salary=',NetSalary)\n",
        "  elif Bpay>10000 and Bpay<30000:\n",
        "    GrossSalary= (Bpay+7.5+5+2500) \n",
        "    Deduction=(60+8+0)\n",
        "    NetSalary=(GrossSalary-Deduction)\n",
        "    print('Gross salary=',GrossSalary)\n",
        "    print('Deduction=',Deduction)\n",
        "    print('Net Salary=',NetSalary)\n",
        "  elif Bpay>30000 and Bpay<50000:\n",
        "    GrossSalary= (Bpay+11+7.5+5000) \n",
        "    Deduction=(60+11+11)\n",
        "    NetSalary=(GrossSalary-Deduction)\n",
        "    print('Gross salary=',GrossSalary)\n",
        "    print('Deduction=',Deduction)\n",
        "    print('Net Salary=',NetSalary)\n",
        "  else :\n",
        "    GrossSalary= (Bpay+25+11+7000)\n",
        "    Deduction=(80+12+20)\n",
        "    NetSalary=(GrossSalary-Deduction)\n",
        "    print('Gross salary=',GrossSalary)\n",
        "    print('Deduction=',Deduction)\n",
        "    print('Net Salary=',NetSalary)\n",
        "calculate()\n"
      ]
    },
    {
      "cell_type": "code",
      "source": [
        ""
      ],
      "metadata": {
        "id": "asinTRs4y-we"
      },
      "execution_count": null,
      "outputs": []
    }
  ]
}