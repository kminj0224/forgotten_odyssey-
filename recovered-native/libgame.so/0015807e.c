/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0015807e  Symbol: setViewPortInPoints */

/* cocos2d::CCEGLView::setViewPortInPoints(float, float, float, float) */

undefined8 __thiscall
cocos2d::CCEGLView::setViewPortInPoints
          (CCEGLView *this,float param_1,float param_2,float param_3,float param_4)

{
  CCDirector *this_00;
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 in_r1;
  undefined4 in_r2;
  undefined4 in_r3;
  undefined4 uVar4;
  undefined4 in_stack_00000000;
  undefined4 local_1c;
  
  if (this[0x24] == (CCEGLView)0x0) {
    uVar3 = __fixsfsi(in_r1);
    uVar1 = __fixsfsi(in_r2);
    uVar4 = __fixsfsi(in_r3);
    uVar2 = __fixsfsi(in_stack_00000000);
    local_1c = in_r1;
  }
  else {
    uVar4 = *(undefined4 *)(this + 0x2c);
    this_00 = (CCDirector *)CCDirector::sharedDirector();
    uVar1 = CCDirector::getContentScaleFactor(this_00);
    uVar2 = __divsf3(uVar4,uVar1);
    __mulsf3(in_r1,uVar2);
    __fixsfsi();
    uVar1 = __floatsisf();
    __addsf3(uVar1,*(undefined4 *)(this + 0x14));
    uVar3 = __fixsfsi();
    __mulsf3(in_r2,uVar2);
    __fixsfsi();
    uVar1 = __floatsisf();
    __addsf3(uVar1,*(undefined4 *)(this + 0x18));
    uVar1 = __fixsfsi();
    __mulsf3(in_r3,uVar2);
    uVar4 = __fixsfsi();
    __mulsf3(in_stack_00000000,uVar2);
    uVar2 = __fixsfsi();
    local_1c = uVar3;
  }
  glViewport(uVar3,uVar1,uVar4,uVar2);
  return CONCAT44(local_1c,in_r3);
}


