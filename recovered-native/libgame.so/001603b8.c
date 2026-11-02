/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 001603b8  Symbol: deleteBackward */

/* cocos2d::CCTextFieldTTF::deleteBackward() */

void __thiscall cocos2d::CCTextFieldTTF::deleteBackward(CCTextFieldTTF *this)

{
  byte *pbVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  void *pvVar5;
  int iVar6;
  undefined auStack_20 [4];
  undefined4 local_1c [2];
  
  iVar4 = *(int *)(**(int **)(this + 500) + -0xc);
  if (iVar4 != 0) {
    iVar6 = 1;
    while( true ) {
      pbVar1 = (byte *)FUN_001ee118(*(undefined4 *)(this + 500));
      if ((*pbVar1 & 0xc0) != 0x80) break;
      iVar6 = iVar6 + 1;
    }
    piVar2 = *(int **)(this + 0x1e8);
    if ((piVar2 == (int *)0x0) ||
       (iVar3 = (**(code **)(*piVar2 + 0xc))
                          (piVar2,this,**(int **)(this + 500) + (iVar4 - iVar6),iVar6), iVar3 == 0))
    {
      if (iVar6 < iVar4) {
        FUN_001eed80(local_1c,**(undefined4 **)(this + 500),iVar4 - iVar6,auStack_20);
        (**(code **)(*(int *)this + 0x11c))(this,local_1c[0]);
        FUN_001ed6b8(local_1c);
      }
      else {
        pvVar5 = *(void **)(this + 500);
        if (pvVar5 != (void *)0x0) {
          FUN_001ed6b8(pvVar5);
          operator_delete(pvVar5);
          *(undefined4 *)(this + 500) = 0;
        }
        piVar2 = (int *)operator_new(4);
        *piVar2 = *(int *)(DAT_00160484 + 0x16043a) + 0xc;
        *(int **)(this + 500) = piVar2;
        *(undefined4 *)(this + 0x1ec) = 0;
        CCLabelTTF::setString((CCLabelTTF *)this,**(char ***)(this + 0x1f8));
      }
    }
  }
  return;
}


