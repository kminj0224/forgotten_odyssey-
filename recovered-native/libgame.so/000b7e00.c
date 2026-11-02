/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 000b7e00  Symbol: _KG_Animation */

/* _KG_Animation::_KG_Animation() */

_KG_Animation * __thiscall _KG_Animation::_KG_Animation(_KG_Animation *this)

{
  CCSize *this_00;
  _KG_Animation *p_Var1;
  _KG_Animation *p_Var2;
  
  p_Var1 = this + 0x4c;
  *(int *)this = *(int *)(DAT_000b7e5c + 0xb7e0c) + 0xc;
  cocos2d::CCPoint::CCPoint((CCPoint *)(this + 8));
  cocos2d::CCPoint::CCPoint((CCPoint *)(this + 0x10));
  cocos2d::CCSize::CCSize((CCSize *)(this + 0x18));
  cocos2d::CCPoint::CCPoint((CCPoint *)(this + 0x20));
  cocos2d::CCSize::CCSize((CCSize *)(this + 0x30));
  cocos2d::CCSize::CCSize((CCSize *)(this + 0x44));
  p_Var2 = this + DAT_000b7e60;
  do {
    cocos2d::CCPoint::CCPoint((CCPoint *)(p_Var1 + 4));
    this_00 = (CCSize *)(p_Var1 + 0xc);
    p_Var1 = p_Var1 + 0x1c;
    cocos2d::CCSize::CCSize(this_00);
  } while (p_Var1 != p_Var2);
  return this;
}


