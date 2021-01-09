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
class RefClass		{ int&		r; };
class CharClass		{ char		c; };
class IntClass		{ int		i; };
class FloatClass	{ float		f; };
class DoubleClass	{ double	d; };
class StringClass	{ string    s; };
class TwoIntClass : IntClass { int i; };

class MemoryAlignmentClass
{
	char c;
	int i;
};

class DataClass
{
public:
	StringClass sClass;
	//NullClass	nClass;
	//PtrClass	pClass;
	//CharClass	cClass;
	IntClass	iClass;
	FloatClass	fClass;
	DoubleClass dClass;
	PtrClass	pClass;
	IntClass	iiClass;
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
public:
	virtual void Foo() = 0;
	void Foo1() {}
};

class VirtualClassA : public VirtualBassClass {};

class VirtualClassB : public VirtualBassClass
{
public:
	virtual void Foo() override {}
};

class VirtualClassC : public VirtualBassClass
{
public:
	virtual void Foo() override {}
};

template<typename dst_type, typename src_type>
dst_type pointer_cast(src_type src)
{
	return *static_cast<dst_type*>(static_cast<void*>(&src));
}
