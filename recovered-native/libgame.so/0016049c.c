/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0016049c  Symbol: insertText */

/* cocos2d::CCTextFieldTTF::insertText(char const*, int) */

void __thiscall cocos2d::CCTextFieldTTF::insertText(CCTextFieldTTF *this,char *param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  undefined auStack_24 [4];
  byte *local_20;
  undefined4 local_1c [2];
  
  FUN_001eed80(&local_20,param_1,param_2,auStack_24);
  iVar1 = FUN_001ece70(&local_20,10,0);
  if (iVar1 != -1) {
    FUN_001edcf8(&local_20,iVar1,0xffffffff);
    param_2 = iVar1;
  }
  if (0 < param_2) {
    piVar2 = *(int **)(this + 0x1e8);
    if ((piVar2 != (int *)0x0) &&
       (iVar3 = (**(code **)(*piVar2 + 8))(piVar2,this,local_20,param_2), iVar3 != 0))
    goto LAB_00160564;
    iVar3 = 0;
    for (; *local_20 != 0; local_20 = local_20 + 1) {
      iVar3 = iVar3 + (uint)((*local_20 & 0xc0) != 0x80);
    }
    *(int *)(this + 0x1ec) = *(int *)(this + 0x1ec) + iVar3;
    FUN_001ee80c(local_1c,*(undefined4 *)(this + 500));
    FUN_001ee6cc(local_1c,&local_20);
    (**(code **)(*(int *)this + 0x11c))(this,local_1c[0]);
    FUN_001ed6b8(local_1c);
  }
  if ((iVar1 != -1) &&
     ((piVar2 = *(int **)(this + 0x1e8), piVar2 == (int *)0x0 ||
      (iVar1 = (**(code **)(*piVar2 + 8))(piVar2,this,DAT_00160570 + 0x160544,1), iVar1 == 0)))) {
    (**(code **)(*(int *)this + 300))(this);
  }
LAB_00160564:
  FUN_001ed6b8(&local_20);
  return;
}


