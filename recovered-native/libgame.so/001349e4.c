/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 001349e4  Symbol: FileLode */

/* StageClear::FileLode() */

void __thiscall StageClear::FileLode(StageClear *this)

{
  undefined4 uVar1;
  CCSpriteFrameCache *pCVar2;
  undefined8 uVar3;
  _ccColor4B local_3c;
  undefined local_3b;
  undefined local_3a;
  undefined local_39;
  CCPoint local_38;
  int local_34;
  CCPoint local_30;
  int local_2c;
  CCPoint local_28;
  int local_24;
  CCPoint local_20;
  int local_1c;
  
  local_3c = (_ccColor4B)0x0;
  local_3b = 0;
  local_3a = 0;
  local_39 = 0x7f;
  uVar1 = cocos2d::CCLayerColor::layerWithColor(&local_3c);
  uVar3 = (**(code **)(*(int *)this + 0xcc))(this,uVar1,1,1);
  pCVar2 = *(CCSpriteFrameCache **)(this + 0x110);
  cocos2d::CCPoint::CCPoint((CCPoint *)&local_38,(float)uVar3,(float)((ulonglong)uVar3 >> 0x20));
  uVar3 = vDrawFrame(pCVar2,(CCNode *)this,(char *)(DAT_00134ab4 + 0x134a32),local_38,local_34,1);
  pCVar2 = *(CCSpriteFrameCache **)(this + 0x110);
  cocos2d::CCPoint::CCPoint((CCPoint *)&local_30,(float)uVar3,(float)((ulonglong)uVar3 >> 0x20));
  uVar3 = vDrawFrame(pCVar2,(CCNode *)this,(char *)(DAT_00134ac0 + 0x134a52),local_30,local_2c,2);
  pCVar2 = *(CCSpriteFrameCache **)(this + 0x110);
  cocos2d::CCPoint::CCPoint((CCPoint *)&local_28,(float)uVar3,(float)((ulonglong)uVar3 >> 0x20));
  uVar3 = vDrawFrame(pCVar2,(CCNode *)this,(char *)(DAT_00134ac8 + 0x134a7a),local_28,local_24,3);
  pCVar2 = *(CCSpriteFrameCache **)(this + 0x110);
  cocos2d::CCPoint::CCPoint((CCPoint *)&local_20,(float)uVar3,(float)((ulonglong)uVar3 >> 0x20));
  vDrawFrame(pCVar2,(CCNode *)this,(char *)(DAT_00134ad0 + 0x134a9a),local_20,local_1c,4);
  initSetIsVisible(this);
  return;
}


