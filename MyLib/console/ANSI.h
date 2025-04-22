#pragma once
#include <iostream>
#define BlackBG  40   // ������� ������
#define BlackFG  30   // ��������� ������
#define RedBG  41     // ������� �������
#define RedFG  31     // ��������� �������
#define GreenBG  42   // ������� �������
#define GreenFG  32   // ��������� �������
#define YellowBG  43  // ������� ������
#define YellowFG  33  // ��������� ������
#define BlueBG  44    // ������� �����
#define BlueFG  34    // ��������� �����
#define MagentaBG  45 // ������� ���������
#define MagentaFG  35 // ��������� ���������
#define CyanBG  46    // ������� ��������
#define CyanFG  36    // ��������� ��������
#define WhiteBG  47   // ������� �����
#define WhiteFG  37   // ��������� �����

/// <summary>
/// ������������� 1 ���� �������
/// https://en.wikipedia.org/wiki/ANSI_escape_code#Colors
/// </summary>
/// <param name="color">����</param>
#define setColor(color) std::cout << "\x1b[" << color << 'm'
/// <summary>
/// ������������� 2 ����� �������, ��� ���� � ��� �������
/// </summary>
/// <param name="color1">����1</param>
/// <param name="color2">����2</param>
#define setColor2(color1, color2) std::cout << "\x1b[" << color1 << ';' << color2 << 'm'
/// <summary>/// ���������� ��� ����� ������� �� �����������/// </summary>
#define resetColor() setColor(0)
/// <summary>
/// ��������� ����� ������ � ������� RGB
/// </summary>
/// <param name="r">������� ��������</param>
/// <param name="g">������� ��������</param>
/// <param name="b">������� ������</param>
#define set_RGB_FG(r, g, b) std::cout << "\x1b[38;2;" << r << ";" << g << ";" << b << "m"
/// <summary>
/// ������������� ���� ���� � ������� RGB
/// </summary>
/// <param name="r">������� ��������</param>
/// <param name="g">������� ��������</param>
/// <param name="b">������� ������</param>
#define set_RGB_BG(r, g, b) std::cout << "\x1b[48;2;" << r << ";" << g << ";" << b << "m"
/// <summary> ������������� ������ � ������ ������� </summary>
/// <param name="x"></param>
/// <param name="y"></param>
#define setCursorPosition(x, y) std::cout << "\033[" << y << ";" << x << "H"
//������ �����
#define BOLD_TEXT "\x1b[1m"