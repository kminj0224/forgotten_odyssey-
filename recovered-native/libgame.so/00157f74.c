/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 00157f74  Symbol: create */

/* cocos2d::CCEGLView::create(int, int) */

void __thiscall cocos2d::CCEGLView::create(CCEGLView *this,int param_1,int param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  
  if ((param_2 != 0) && (param_1 != 0)) {
    uVar1 = __floatsisf(param_1);
    *(undefined4 *)(this + 0xc) = uVar1;
    uVar2 = __floatsisf(param_2);
    uVar6 = *(undefined4 *)(this + 4);
    *(undefined4 *)(this + 0x10) = uVar2;
    uVar3 = __divsf3(uVar6,uVar1);
    uVar7 = *(undefined4 *)(this + 8);
    uVar4 = __divsf3(uVar7,uVar2);
    iVar5 = __aeabi_fcmpgt(uVar3,uVar4);
    if (iVar5 != 0) {
      uVar3 = uVar4;
    }
    *(undefined4 *)(this + 0x2c) = uVar3;
    __mulsf3(uVar1,uVar3);
    __fixsfsi();
    uVar1 = __floatsisf();
    uVar4 = __subsf3(uVar6,uVar1);
    uVar4 = __mulsf3(uVar4,0x3f000000);
    *(undefined4 *)(this + 0x14) = uVar4;
    __mulsf3(uVar2,uVar3);
    __fixsfsi();
    uVar3 = __floatsisf();
    uVar2 = __subsf3(uVar7,uVar3);
    uVar2 = __mulsf3(uVar2,0x3f000000);
    *(undefined4 *)(this + 0x1c) = uVar1;
    *(undefined4 *)(this + 0x18) = uVar2;
    *(undefined4 *)(this + 0x20) = uVar3;
    this[0x24] = (CCEGLView)0x1;
  }
  return;
}


