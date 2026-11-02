/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 00105204  Symbol: ~Mana */

/* Mana::~Mana() */

Mana * __thiscall Mana::~Mana(Mana *this)

{
  ~Mana(this);
  operator_delete(this);
  return this;
}


