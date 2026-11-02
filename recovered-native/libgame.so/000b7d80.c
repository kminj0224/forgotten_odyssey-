/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 000b7d80  Symbol: Clear */

/* Clear(_KG_Animation_Obj) */

undefined8 Clear(_KG_Animation_Obj param_1)

{
  undefined4 in_r1;
  float in_s0;
  float in_s1;
  undefined8 uVar1;
  _KG_Animation_Obj _Stack_28;
  undefined4 uStack_24;
  CCSize aCStack_20 [8];
  
  _Stack_28 = param_1;
  uStack_24 = in_r1;
  uVar1 = cocos2d::CCPoint::CCPoint((CCPoint *)&_Stack_28,in_s0,in_s1);
  cocos2d::CCSize::CCSize(aCStack_20,(float)uVar1,(float)((ulonglong)uVar1 >> 0x20));
  return CONCAT44(uStack_24,_Stack_28);
}


