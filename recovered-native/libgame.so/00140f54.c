/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 00140f54  Symbol: update */

/* cocos2d::CCFadeOutTRTiles::update(float) */

void __thiscall cocos2d::CCFadeOutTRTiles::update(CCFadeOutTRTiles *this,float param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 in_r1;
  int iVar3;
  int iVar4;
  int local_38;
  int local_34;
  int local_30;
  int local_2c;
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  
  for (iVar4 = 0; iVar4 < *(int *)(this + 0x2c); iVar4 = iVar4 + 1) {
    for (iVar3 = 0; iVar3 < *(int *)(this + 0x30); iVar3 = iVar3 + 1) {
      local_38 = iVar4;
      local_34 = iVar3;
      uVar1 = (**(code **)(*(int *)this + 0x30))(param_1,this,&local_38,in_r1);
      iVar2 = __aeabi_fcmpeq(uVar1,0);
      if (iVar2 == 0) {
        iVar2 = __aeabi_fcmplt(uVar1,0x3f800000);
        if (iVar2 == 0) {
          local_20 = iVar4;
          local_1c = iVar3;
          param_1 = (float)turnOnTile(this,(_ccGridSize *)&local_20);
        }
        else {
          local_28 = iVar4;
          local_24 = iVar3;
          param_1 = (float)(**(code **)(*(int *)this + 0x34))(this,&local_28,uVar1);
        }
      }
      else {
        local_30 = iVar4;
        local_2c = iVar3;
        param_1 = (float)turnOffTile(this,(_ccGridSize *)&local_30);
      }
    }
  }
  return;
}


