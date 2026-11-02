/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 00160a00  Symbol: getContentSize */

/* cocos2d::CCTexture2D::getContentSize() */

undefined4 * cocos2d::CCTexture2D::getContentSize(void)

{
  undefined4 *in_r0;
  CCDirector *pCVar1;
  undefined4 uVar2;
  int in_r1;
  undefined4 uVar3;
  
  CCSize::CCSize((CCSize *)in_r0);
  uVar3 = *(undefined4 *)(in_r1 + 0x24);
  pCVar1 = (CCDirector *)CCDirector::sharedDirector();
  uVar2 = CCDirector::getContentScaleFactor(pCVar1);
  uVar2 = __divsf3(uVar3,uVar2);
  *in_r0 = uVar2;
  uVar3 = *(undefined4 *)(in_r1 + 0x28);
  pCVar1 = (CCDirector *)CCDirector::sharedDirector();
  uVar2 = CCDirector::getContentScaleFactor(pCVar1);
  uVar2 = __divsf3(uVar3,uVar2);
  in_r0[1] = uVar2;
  return in_r0;
}


