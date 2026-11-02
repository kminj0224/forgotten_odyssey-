/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 00145e3c  Symbol: initWithSize */

/* cocos2d::CCGridBase::initWithSize(cocos2d::_ccGridSize const&, cocos2d::CCTexture2D*, bool) */

CCGrabber * __thiscall
cocos2d::CCGridBase::initWithSize
          (CCGridBase *this,_ccGridSize *param_1,CCTexture2D *param_2,bool param_3)

{
  undefined4 *puVar1;
  CCGrabber *this_00;
  undefined4 uVar2;
  
  this[0x11] = (CCGridBase)0x0;
  *(undefined4 *)(this + 0x14) = 0;
  *(undefined4 *)(this + 0x18) = *(undefined4 *)param_1;
  uVar2 = *(undefined4 *)(param_1 + 4);
  *(CCTexture2D **)(this + 0x20) = param_2;
  *(undefined4 *)(this + 0x1c) = uVar2;
  if (param_2 != (CCTexture2D *)0x0) {
    CCObject::retain((CCObject *)param_2);
  }
  this[0x30] = (CCGridBase)param_3;
  puVar1 = (undefined4 *)(**(code **)(**(int **)(this + 0x20) + 0x24))();
  uVar2 = __floatsisf(*(undefined4 *)(this + 0x18));
  uVar2 = __divsf3(*puVar1,uVar2);
  *(undefined4 *)(this + 0x24) = uVar2;
  uVar2 = __floatsisf(*(undefined4 *)(this + 0x1c));
  uVar2 = __divsf3(puVar1[1],uVar2);
  *(undefined4 *)(this + 0x28) = uVar2;
  this_00 = (CCGrabber *)operator_new(0x20);
  CCGrabber::CCGrabber(this_00);
  *(CCGrabber **)(this + 0x2c) = this_00;
  if (this_00 != (CCGrabber *)0x0) {
    CCGrabber::grab((CCTexture2D *)this_00);
    this_00 = (CCGrabber *)0x1;
  }
  (**(code **)(*(int *)this + 0x1c))(this);
  return this_00;
}


