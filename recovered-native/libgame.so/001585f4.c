/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 001585f4  Symbol: getStaticMethodInfo */

/* cocos2d::JniHelper::getStaticMethodInfo(cocos2d::JniMethodInfo_&, char const*, char const*, char
   const*) */

int cocos2d::JniHelper::getStaticMethodInfo
              (JniMethodInfo_ *param_1,char *param_2,char *param_3,char *param_4)

{
  int iVar1;
  undefined4 uVar2;
  int *local_1c [2];
  
  local_1c[0] = (int *)0x0;
  iVar1 = FUN_00158538(local_1c);
  if (iVar1 != 0) {
    uVar2 = FUN_0015859c(param_2,local_1c[0]);
    iVar1 = (**(code **)(*local_1c[0] + 0x1c4))(local_1c[0],uVar2,param_3,param_4);
    if (iVar1 == 0) {
      __android_log_print(3,DAT_00158650 + 0x158638,DAT_00158654 + 0x15863a,param_3);
      iVar1 = 0;
    }
    else {
      *(undefined4 *)(param_1 + 4) = uVar2;
      *(int *)(param_1 + 8) = iVar1;
      *(int **)param_1 = local_1c[0];
      iVar1 = 1;
    }
  }
  return iVar1;
}


