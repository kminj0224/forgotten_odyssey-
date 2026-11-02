/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0013378c  Symbol: FileLode */

/* GameOption::FileLode() */

void __thiscall GameOption::FileLode(GameOption *this)

{
  undefined4 uVar1;
  CCSpriteFrameCache *pCVar2;
  undefined8 uVar3;
  _ccColor4B local_4c;
  undefined local_4b;
  undefined local_4a;
  undefined local_49;
  CCPoint local_48;
  int local_44;
  CCPoint local_40;
  int local_3c;
  CCPoint local_38;
  int local_34;
  CCPoint local_30;
  int local_2c;
  CCPoint local_28;
  int local_24;
  CCPoint local_20;
  int local_1c;
  
  local_4c = (_ccColor4B)0x0;
  local_4b = 0;
  local_4a = 0;
  local_49 = 0xff;
  uVar1 = cocos2d::CCLayerColor::layerWithColor(&local_4c);
  uVar3 = (**(code **)(*(int *)this + 0xcc))(this,uVar1,1,1);
  pCVar2 = *(CCSpriteFrameCache **)(this + 0x110);
  cocos2d::CCPoint::CCPoint((CCPoint *)&local_48,(float)uVar3,(float)((ulonglong)uVar3 >> 0x20));
  uVar3 = vDrawFrame(pCVar2,(CCNode *)this,(char *)(DAT_001338a4 + 0x1337d4),local_48,local_44,1);
  pCVar2 = *(CCSpriteFrameCache **)(this + 0x110);
  cocos2d::CCPoint::CCPoint((CCPoint *)&local_40,(float)uVar3,(float)((ulonglong)uVar3 >> 0x20));
  uVar3 = vDrawFrame(pCVar2,(CCNode *)this,(char *)(DAT_001338b0 + 0x1337f8),local_40,local_3c,2);
  pCVar2 = *(CCSpriteFrameCache **)(this + 0x110);
  cocos2d::CCPoint::CCPoint((CCPoint *)&local_38,(float)uVar3,(float)((ulonglong)uVar3 >> 0x20));
  uVar3 = vDrawFrame(pCVar2,(CCNode *)this,(char *)(DAT_001338bc + 0x133822),local_38,local_34,3);
  pCVar2 = *(CCSpriteFrameCache **)(this + 0x110);
  cocos2d::CCPoint::CCPoint((CCPoint *)&local_30,(float)uVar3,(float)((ulonglong)uVar3 >> 0x20));
  uVar3 = vDrawFrame(pCVar2,(CCNode *)this,(char *)(DAT_001338c8 + 0x133842),local_30,local_2c,4);
  pCVar2 = *(CCSpriteFrameCache **)(this + 0x110);
  cocos2d::CCPoint::CCPoint((CCPoint *)&local_28,(float)uVar3,(float)((ulonglong)uVar3 >> 0x20));
  uVar3 = vDrawFrame(pCVar2,(CCNode *)this,(char *)(DAT_001338d0 + 0x13386a),local_28,local_24,5);
  pCVar2 = *(CCSpriteFrameCache **)(this + 0x110);
  cocos2d::CCPoint::CCPoint((CCPoint *)&local_20,(float)uVar3,(float)((ulonglong)uVar3 >> 0x20));
  vDrawFrame(pCVar2,(CCNode *)this,(char *)(DAT_001338dc + 0x13388a),local_20,local_1c,6);
  initSetIsVisible(this);
  return;
}


