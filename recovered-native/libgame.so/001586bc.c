/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 001586bc  Symbol: jstring2string */

/* cocos2d::JniHelper::jstring2string(_jstring*) */

JniHelper * __thiscall cocos2d::JniHelper::jstring2string(JniHelper *this,_jstring *param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined auStack_28 [4];
  undefined auStack_24 [3];
  char local_21;
  int *local_20;
  undefined auStack_1c [8];
  
  local_20 = (int *)0x0;
  iVar1 = FUN_00158538(&local_20);
  if (iVar1 == 0) {
    FUN_001eed40(this,0,auStack_24);
  }
  else {
    uVar2 = (**(code **)(*local_20 + 0x2a4))(local_20,param_1,&local_21);
    FUN_001eed40(auStack_1c,uVar2,auStack_28);
    if (local_21 != '\0') {
      (**(code **)(*local_20 + 0x2a8))(local_20,param_1,uVar2);
    }
    FUN_001ee80c(this,auStack_1c);
    FUN_001ed6b8(auStack_1c);
  }
  return this;
}


