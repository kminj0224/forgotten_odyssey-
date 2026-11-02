/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 000f0c70  Symbol: ~Effect */

/* Effect::~Effect() */

Effect * __thiscall Effect::~Effect(Effect *this)

{
  ~Effect(this);
  operator_delete(this);
  return this;
}


