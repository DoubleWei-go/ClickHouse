#pragma once

#include <DB/Columns/ColumnsNumber.h>
#include <DB/DataTypes/IDataTypeNumberVariable.h>


namespace DB
{

/** Типы столбцов для чисел переменной ширины. */

class DataTypeVarUInt : public IDataTypeNumberVariable<UInt64, ColumnUInt64>
{
public:
	std::string getName() const { return "VarUInt"; }
	DataTypePtr clone() const { return new DataTypeVarUInt; }
};

class DataTypeVarInt : public IDataTypeNumberVariable<Int64, ColumnInt64>
{
public:
	std::string getName() const { return "VarInt"; }
	DataTypePtr clone() const { return new DataTypeVarInt; }
};

}
