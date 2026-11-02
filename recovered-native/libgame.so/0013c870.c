/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0013c870  Symbol: ~CCSequence */

/* cocos2d::CCSequence::~CCSequence() */

CCSequence * __thiscall cocos2d::CCSequence::~CCSequence(CCSequence *this)

{
  ~CCSequence(this);
  operator_delete(this);
  return this;
}


