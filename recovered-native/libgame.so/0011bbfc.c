/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0011bbfc  Symbol: ~New_Notice */

/* New_Notice::~New_Notice() */

New_Notice * __thiscall New_Notice::~New_Notice(New_Notice *this)

{
  ~New_Notice(this);
  operator_delete(this);
  return this;
}


