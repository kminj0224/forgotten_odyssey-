/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0014f758  Symbol: initWithFade */

/* cocos2d::CCMotionStreak::initWithFade(float, float, char const*, float, float,
   cocos2d::_ccColor4B const&) */

undefined4
cocos2d::CCMotionStreak::initWithFade
          (float param_1,float param_2,char *param_3,float param_4,float param_5,_ccColor4B *param_6
          )

{
  int iVar1;
  undefined4 in_r2;
  undefined4 uVar2;
  _ccColor4B *in_r3;
  undefined4 uVar3;
  float fVar4;
  char *in_stack_00000000;
  
  *(undefined4 *)(param_3 + 0x110) = in_r2;
  iVar1 = DAT_0014f7ac;
  uVar3 = *(undefined4 *)(DAT_0014f7ac + 0x14f76c);
  *(char **)(param_3 + 0x114) = in_stack_00000000;
  uVar2 = *(undefined4 *)(iVar1 + 0x14f770);
  *(undefined4 *)(param_3 + 0x118) = uVar3;
  *(undefined4 *)(param_3 + 0x11c) = uVar2;
  uVar2 = CCRibbon::ribbonWithWidth(param_1,in_stack_00000000,param_2,in_r3,param_4);
  *(undefined4 *)(param_3 + 0x100) = uVar2;
  fVar4 = (float)(**(code **)(*(int *)param_3 + 0xc4))(param_3,uVar2);
  CCNode::schedule((CCNode *)param_3,(_func_void_float *)0x10,fVar4);
  return 1;
}


