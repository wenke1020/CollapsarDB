#ifndef COLLAPSARDB_COMMON_UNCOPYABLE_H
#define COLLAPSARDB_COMMON_UNCOPYABLE_H


namespace CollapsarDB
{

namespace common
{

// Private copy constructor and copy assignment ensure class
// derived from class Uncopyable can't be copied.
// The same class implementation in boost is class noncopyable

class Uncopyable
{
protected:
	Uncopyable() { }
	virtual ~Uncopyable() { }

private:
	Uncopyable(const Uncopyable &);
	Uncopyable& operator=(const Uncopyable &);
};

} // namespace common
} // namespace CollapsarDB

#endif // COLLAPSARDB_COMMON_UNCOPYABLE_H
