#pragma once
#include <iostream>
#define BlackBG  40   // Фоновый черный
#define BlackFG  30   // Текстовый черный
#define RedBG  41     // Фоновый красный
#define RedFG  31     // Текстовый красный
#define GreenBG  42   // Фоновый зеленый
#define GreenFG  32   // Текстовый зеленый
#define YellowBG  43  // Фоновый желтый
#define YellowFG  33  // Текстовый желтый
#define BlueBG  44    // Фоновый синий
#define BlueFG  34    // Текстовый синий
#define MagentaBG  45 // Фоновый пурпурный
#define MagentaFG  35 // Текстовый пурпурный
#define CyanBG  46    // Фоновый циановый
#define CyanFG  36    // Текстовый циановый
#define WhiteBG  47   // Фоновый белый
#define WhiteFG  37   // Текстовый белый

/// <summary>
/// Устанавливаем 1 цвет консоли
/// https://en.wikipedia.org/wiki/ANSI_escape_code#Colors
/// </summary>
/// <param name="color">Цвет</param>
#define setColor(color) std::cout << "\x1b[" << color << 'm'
/// <summary>
/// Устанавливаем 2 цвета консоли, для фона и для символа
/// </summary>
/// <param name="color1">Цвет1</param>
/// <param name="color2">Цвет2</param>
#define setColor2(color1, color2) std::cout << "\x1b[" << color1 << ';' << color2 << 'm'
/// <summary>/// Сбрасываем все цвета консоли на стандартный/// </summary>
#define resetColor() setColor(0)
/// <summary>
/// Установка цвета текста в формате RGB
/// </summary>
/// <param name="r">Оттенок красного</param>
/// <param name="g">Оттенок зеленого</param>
/// <param name="b">Оттенок Синего</param>
#define set_RGB_FG(r, g, b) std::cout << "\x1b[38;2;" << r << ";" << g << ";" << b << "m"
/// <summary>
/// Устанавливает цвет фона в формате RGB
/// </summary>
/// <param name="r">Оттенок красного</param>
/// <param name="g">Оттенок зеленого</param>
/// <param name="b">Оттенок Синего</param>
#define set_RGB_BG(r, g, b) std::cout << "\x1b[48;2;" << r << ";" << g << ";" << b << "m"
/// <summary> Устанавливаем курсор в нужную позицию </summary>
/// <param name="x"></param>
/// <param name="y"></param>
#define setCursorPosition(x, y) std::cout << "\033[" << y << ";" << x << "H"
//Жирный текст
#define BOLD_TEXT "\x1b[1m"