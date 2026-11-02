/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 00144e1c  Symbol: showFPS */

/* cocos2d::CCDirector::showFPS() */

void __thiscall cocos2d::CCDirector::showFPS(CCDirector *this)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  undefined8 uVar5;
  
  iVar4 = *(int *)(this + 0x40);
  *(int *)(this + 0x40) = iVar4 + 1;
  uVar1 = __addsf3(*(undefined4 *)(this + 0x2c),*(undefined4 *)(this + 0x58));
  *(undefined4 *)(this + 0x2c) = uVar1;
  iVar2 = __aeabi_fcmpgt(uVar1,0x3f000000);
  if (iVar2 != 0) {
    uVar3 = __floatunsisf(iVar4 + 1);
    uVar1 = __divsf3(uVar3,uVar1);
    *(undefined4 *)(this + 0x40) = 0;
    *(undefined4 *)(this + 0x2c) = 0;
    *(undefined4 *)(this + 0x30) = uVar1;
    uVar5 = __extendsfdf2();
    sprintf(*(char **)(this + 0x78),(char *)(DAT_00144e84 + 0x144e62),(int)uVar5,
            (int)((ulonglong)uVar5 >> 0x20));
    (**(code **)(**(int **)(this + 0x34) + 0x11c))
              (*(int **)(this + 0x34),*(undefined4 *)(this + 0x78));
  }
  (**(code **)(**(int **)(this + 0x34) + 0xe0))();
  return;
}


