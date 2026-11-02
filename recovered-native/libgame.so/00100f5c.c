/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 00100f5c  Symbol: ~Monster2000 */

/* Monster2000::~Monster2000() */

Monster2000 * __thiscall Monster2000::~Monster2000(Monster2000 *this)

{
  ~Monster2000(this);
  operator_delete(this);
  return this;
}


