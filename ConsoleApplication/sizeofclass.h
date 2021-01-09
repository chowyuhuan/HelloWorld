/*
 * time:   1/9/2021 13:14
 * file:   sizeofclass.h
 * desc:   test c++ object size
 *
 * Copyright (C) 2021-2031  YuHuan Chow <chowyuhuan@gmail.com>
 */
 
#pragma once

#include <iostream>

using namespace std;

class NullClass {};
class PtrClass		{ void*		p; };
class CharClass		{ char		c; };
class IntClass		{ int		i; };
class FloatClass	{ float		f; };
class DoubleClass	{ double	d; };
class StringClass	{ string    s; };

class MemoryAlignmentClass
{
	char c;
	int i;
};

class DataClass
{
	NullClass	nClass;
	PtrClass	pClass;
	CharClass	cClass;
	IntClass	iClass;
	FloatClass	fClass;
	DoubleClass dClass;
};

class FuncClass
{
	void Foo() {}
};

class FuncInlineClass
{
	inline void Foo() {}
};

class VirtualBassClass
{
	virtual void Foo() = 0;
};

class VirtualClassA : VirtualBassClass
{
	virtual void Foo() override {}
};

class VirtualClassB : VirtualBassClass
{
	virtual void Foo() override {}

	void Foo1() {}
};
