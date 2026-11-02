/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 00164120  Symbol: updateTileForGID */

/* cocos2d::CCTMXLayer::updateTileForGID(unsigned int, cocos2d::CCPoint const&) */

undefined4 __thiscall
cocos2d::CCTMXLayer::updateTileForGID(CCTMXLayer *this,uint param_1,CCPoint *param_2)

{
  uint uVar1;
  CCSprite *this_00;
  code *pcVar2;
  undefined4 uVar3;
  int *piVar4;
  undefined8 uVar5;
  float extraout_s2;
  float extraout_s3;
  CCTMXLayer aCStack_40 [8];
  CCRect local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  CCRect aCStack_28 [20];
  
  CCTMXTilesetInfo::rectForGID((uint)&local_38);
  uVar3 = *(undefined4 *)(this + 0x154);
  __divsf3(local_38,uVar3);
  __divsf3(local_34,uVar3);
  __divsf3(local_30,uVar3);
  uVar5 = __divsf3(local_2c,uVar3);
  CCRect::CCRect(aCStack_28,(float)uVar5,(float)((ulonglong)uVar5 >> 0x20),extraout_s2,extraout_s3);
  memcpy(&local_38,aCStack_28,0x10);
  uVar3 = __mulsf3(param_2[1],*(undefined4 *)(this + 0x110));
  __addsf3(uVar3,*param_2);
  uVar1 = __fixsfsi();
  this_00 = *(CCSprite **)(this + 0x14c);
  if (this_00 == (CCSprite *)0x0) {
    this_00 = (CCSprite *)operator_new(0x1c8);
    CCSprite::CCSprite(this_00);
    *(CCSprite **)(this + 0x14c) = this_00;
  }
  CCSprite::initWithBatchNode(this_00,(CCSpriteBatchNode *)this,&local_38);
  piVar4 = *(int **)(this + 0x14c);
  pcVar2 = *(code **)(*piVar4 + 0x44);
  positionAt(aCStack_40,(CCPoint *)this);
  (*pcVar2)(piVar4,aCStack_40);
  piVar4 = *(int **)(this + 0x14c);
  pcVar2 = *(code **)(*piVar4 + 0x1c);
  vertexZForPos((CCPoint *)this);
  uVar3 = __floatsisf();
  (*pcVar2)(piVar4,uVar3);
  (**(code **)(**(int **)(this + 0x14c) + 0x74))(*(int **)(this + 0x14c),DAT_0016422c + 0x1641f4);
  (**(code **)(**(int **)(this + 0x14c) + 0xec))(*(int **)(this + 0x14c),this[0x134]);
  uVar3 = atlasIndexForExistantZ(this,uVar1);
  *(undefined4 *)(*(int *)(this + 0x14c) + 0x10c) = uVar3;
  *(undefined *)(*(int *)(this + 0x14c) + 0x118) = 1;
  CCSprite::updateTransform(*(CCSprite **)(this + 0x14c));
  *(uint *)(uVar1 * 4 + *(int *)(this + 0x120)) = param_1;
  return *(undefined4 *)(this + 0x14c);
}


