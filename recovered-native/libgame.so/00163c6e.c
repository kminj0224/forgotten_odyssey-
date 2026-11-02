/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 00163c6e  Symbol: tileGIDAt */

/* cocos2d::CCTMXLayer::tileGIDAt(cocos2d::CCPoint const&) */

undefined4 cocos2d::CCTMXLayer::tileGIDAt(CCPoint *param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 *in_r1;
  
  uVar1 = __mulsf3(in_r1[1],param_1[0x44]);
  __addsf3(uVar1,*in_r1);
  iVar2 = __fixsfsi();
  return *(undefined4 *)(iVar2 * 4 + param_1[0x48]);
}


