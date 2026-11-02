/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 000eda50  Symbol: onEnter */

/* Hero_Main_Layer::onEnter() */

void __thiscall Hero_Main_Layer::onEnter(Hero_Main_Layer *this)

{
  int *piVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  _ccColor4B local_34;
  undefined local_33;
  undefined local_32;
  undefined local_31;
  CCPoint local_30;
  CCPoint local_2c;
  int local_28;
  int local_24;
  CCPoint local_20;
  CCPoint local_1c;
  int local_18;
  int local_14;
  
  if (**(int **)(DAT_000edb2c + 0xeda5c) != 0x1a) {
    piVar1 = (int *)(**(code **)(*(int *)this + 0x90))();
    piVar1 = (int *)(**(code **)(*piVar1 + 0x90))();
    (**(code **)(*piVar1 + 0x114))(piVar1,0);
    piVar1 = (int *)(**(code **)(*(int *)this + 0x90))(this);
    (**(code **)(*piVar1 + 0x114))(piVar1,0);
  }
  (**(code **)(*(int *)this + 0x114))(this,1);
  local_34 = (_ccColor4B)0x0;
  local_33 = 0;
  local_32 = 0;
  local_31 = 0xaa;
  uVar2 = cocos2d::CCLayerColor::layerWithColor(&local_34);
  uVar3 = (**(code **)(*(int *)this + 0xcc))(this,uVar2,0,0);
  uVar3 = cocos2d::CCPoint::CCPoint
                    ((CCPoint *)&local_30,(float)uVar3,(float)((ulonglong)uVar3 >> 0x20));
  cocos2d::CCPoint::CCPoint((CCPoint *)&local_28,(float)uVar3,(float)((ulonglong)uVar3 >> 0x20));
  uVar3 = vDrawFrame((CCNode *)this,(char *)(DAT_000edb38 + 0xedae4),local_30,local_2c,local_28,
                     local_24);
  uVar3 = cocos2d::CCPoint::CCPoint
                    ((CCPoint *)&local_20,(float)uVar3,(float)((ulonglong)uVar3 >> 0x20));
  cocos2d::CCPoint::CCPoint((CCPoint *)&local_18,(float)uVar3,(float)((ulonglong)uVar3 >> 0x20));
  vDrawFrame((CCNode *)this,(char *)(DAT_000edb44 + 0xedb14),local_20,local_1c,local_18,local_14);
  cocos2d::CCLayer::onEnter((CCLayer *)this);
  return;
}


