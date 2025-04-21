#pragma once
class Wallpaper
{
private:
	char* name; //�������� ������ �����
	unsigned int width; //������ ��
	unsigned int height;//������ ��
	double price;//����
public:
	Wallpaper() : Wallpaper(nullptr, 0, 0, 0) {}
	Wallpaper(const Wallpaper& o) : Wallpaper(nullptr, o.width, o.height, o.price) {
		changeName(o.name);
	}
	Wallpaper(const char* n, int w, int h, double p) : name(nullptr), width(w), height(h), price(p){
		changeName(n);
	}
	//����� �����������
	Wallpaper& copy(const Wallpaper& o);
	//�������� ����������
	Wallpaper& operator=(const Wallpaper& o);
	//����������, ������� ��������� �� ���
	~Wallpaper() { clearName(); }
	//�������� ��� �������
	Wallpaper& changeName(const char* n);
	//�������� ��������� �� ���
	Wallpaper& clearName();
	//������� �������������� �����
	Wallpaper& show();
	//������������� ������
	Wallpaper& setWidth(int w);
	//������������� �����
	Wallpaper& setHeight(int h);
	//������������� ����
	Wallpaper& setPrice(double p);
	//���������� ���
	const char* getName() { return name; };
	//���������� ������.
	int getWidth() { return width; };
	//���������� �����
	int getHeight() { return height; };
	//���������� ����
	int getPri�e() { return price; };
};

