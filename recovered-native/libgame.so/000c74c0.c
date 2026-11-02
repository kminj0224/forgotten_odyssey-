/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 000c74c0  Symbol: vDrawString */

/* vDrawString(cocos2d::CCNode*, char const*, cocos2d::CCPoint, cocos2d::CCPoint, char const*, int,
   cocos2d::_ccColor3B, int, int) */

undefined8
vDrawString(CCNode *param_1,char *param_2,CCPoint param_3,CCPoint param_4,char *param_5,int param_6,
           _ccColor3B param_7,int param_8,int param_9)

{
  int *piVar1;
  float fVar2;
  undefined4 in_stack_00000014;
  undefined4 in_stack_00000018;
  CCPoint local_18;
  CCPoint local_14;
  
  local_18 = param_3;
  local_14 = param_4;
  fVar2 = (float)__floatsisf(param_8);
  piVar1 = (int *)cocos2d::CCLabelTTF::labelWithString(param_2,(char *)param_7,fVar2);
  (**(code **)(*piVar1 + 0xf4))(piVar1,&param_9);
  (**(code **)(*piVar1 + 0x74))(piVar1,&param_5);
  (**(code **)(*piVar1 + 0x3c))(piVar1,&local_18);
  (**(code **)(*(int *)param_1 + 0xcc))(param_1,piVar1,in_stack_00000014,in_stack_00000018);
  return CONCAT44(local_18,piVar1);
}


