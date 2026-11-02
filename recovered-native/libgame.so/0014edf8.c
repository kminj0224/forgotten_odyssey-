/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0014edf8  Symbol: initFromString */

/* cocos2d::CCMenuItemFont::initFromString(char const*, cocos2d::CCObject*, void
   (cocos2d::CCObject::*)(cocos2d::CCObject*)) */

undefined8
cocos2d::CCMenuItemFont::initFromString
          (char *param_1,CCObject *param_2,_func_void_CCObject_ptr *param_3)

{
  CCNode *pCVar1;
  _func_void_CCObject_ptr *in_r3;
  char *pcVar2;
  float fVar3;
  undefined4 in_stack_00000000;
  
  FUN_001ee874(param_1 + 0x128,DAT_0014ee50 + 0x14ee0e,param_3,0x128,param_1,param_2,param_3);
  *(undefined4 *)(param_1 + 0x124) = *(undefined4 *)(DAT_0014ee54 + 0x14ee1a);
  pcVar2 = *(char **)(param_1 + 0x128);
  fVar3 = (float)__floatunsisf();
  pCVar1 = (CCNode *)CCLabelTTF::labelWithString((char *)param_2,pcVar2,fVar3);
  CCMenuItemLabel::initWithLabel((CCMenuItemLabel *)param_1,pCVar1,(CCObject *)param_3,in_r3);
  return CONCAT44(in_stack_00000000,1);
}


