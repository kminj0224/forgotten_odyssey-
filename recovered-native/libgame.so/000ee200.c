/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 000ee200  Symbol: ~Boss */

/* Boss::~Boss() */

Boss * __thiscall Boss::~Boss(Boss *this)

{
  ~Boss(this);
  operator_delete(this);
  return this;
}


