/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0014d25c  Symbol: init */

/* cocos2d::CCMenu::init() */

int __thiscall cocos2d::CCMenu::init(CCMenu *this)

{
  int iVar1;
  CCRect *pCVar2;
  CCDirector *this_00;
  code *pcVar3;
  undefined8 uVar4;
  undefined4 local_38;
  undefined4 local_34;
  CCPoint aCStack_30 [8];
  CCPoint aCStack_28 [8];
  CCRect aCStack_20 [8];
  undefined4 local_18;
  undefined4 local_14;
  
  iVar1 = CCLayer::init();
  if (iVar1 != 0) {
    this[0x108] = (CCMenu)0x1;
    CCDirector::sharedDirector();
    uVar4 = CCDirector::getWinSize();
    this[0x78] = (CCMenu)0x0;
    pcVar3 = *(code **)(*(int *)this + 0x74);
    CCPoint::CCPoint(aCStack_30,(float)uVar4,(float)((ulonglong)uVar4 >> 0x20));
    (*pcVar3)(this,aCStack_30);
    (**(code **)(*(int *)this + 0x80))(this,&local_38);
    CCRect::CCRect(aCStack_20);
    pCVar2 = (CCRect *)CCApplication::sharedApplication();
    CCApplication::statusBarFrame(pCVar2);
    this_00 = (CCDirector *)CCDirector::sharedDirector();
    iVar1 = CCDirector::getDeviceOrientation(this_00);
    if (iVar1 - 2U < 2) {
      local_14 = local_18;
    }
    local_34 = __subsf3(local_34,local_14);
    pcVar3 = *(code **)(*(int *)this + 0x3c);
    __mulsf3(local_38,0x3f000000);
    uVar4 = __mulsf3(local_34,0x3f000000);
    CCPoint::CCPoint(aCStack_28,(float)uVar4,(float)((ulonglong)uVar4 >> 0x20));
    (*pcVar3)(this,aCStack_28);
    *(undefined4 *)(this + 0x11c) = 0;
    *(undefined4 *)(this + 0x118) = 0;
    iVar1 = 1;
  }
  return iVar1;
}


