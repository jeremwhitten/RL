#pragma once

#include <iterator>

#include "GenericTypes.hpp"

class NamesIterator;

class NamesStore
{
	friend NamesIterator;

public:

	/// <summary>
	/// Initializes this object.
	/// </summary>
	/// <returns>true if it succeeds, false if it fails.</returns>
	static bool Initialize();

	/// <summary>Gets the address of the global names store.</summary>
	/// <returns>The address of the global names store.</returns>
	static void* GetAddress();

	NamesIterator begin();

	NamesIterator begin() const;

	NamesIterator end();

	NamesIterator end() const;

	/// <summary>
	/// Gets the number of available names.
	/// </summary>
	/// <returns>The number of names.</returns>
	int64_t GetNamesNum() const;

	/// <summary>
	/// Test if the given id is valid.
	/// </summary>
	/// <param name="id">The identifier.</param>
	/// <returns>true if valid, false if not.</returns>
	bool IsValid(int64_t id) const;

	/// <summary>
	/// Gets a name by id.
	/// </summary>
	/// <param name="id">The identifier.</param>
	/// <returns>The name.</returns>
	std::string GetById(int64_t id) const;
};

struct UENameInfo
{
	int64_t Index;
	std::string Name;
};

class NamesIterator : public std::iterator<std::forward_iterator_tag, UENameInfo>
{
	const NamesStore& store;
	int64_t index;

public:
	NamesIterator(const NamesStore& store);

	explicit NamesIterator(const NamesStore& store, int64_t index);

	void swap(NamesIterator& other) noexcept;

	NamesIterator& operator++();

	NamesIterator operator++ (int);

	bool operator==(const NamesIterator& rhs) const;

	bool operator!=(const NamesIterator& rhs) const;

	UENameInfo operator*() const;

	UENameInfo operator->() const;
};
