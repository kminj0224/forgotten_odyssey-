/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0016401c  Symbol: appendTileForGID */

/* cocos2d::CCTMXLayer::appendTileForGID(unsigned int, cocos2d::CCPoint const&) */

undefined4 __thiscall
cocos2d::CCTMXLayer::appendTileForGID(CCTMXLayer *this,uint param_1,CCPoint *param_2)

{
  CCSprite *this_00;
  undefined4 uVar1;
  code *pcVar2;
  uint uVar3;
  undefined4 uVar4;
  int *piVar5;
  undefined8 uVar6;
  float extraout_s2;
  float extraout_s3;
  CCTMXLayer aCStack_40 [8];
  CCRect local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  CCRect aCStack_28 [20];
  
  CCTMXTilesetInfo::rectForGID((uint)&local_38);
  uVar4 = *(undefined4 *)(this + 0x154);
  __divsf3(local_38,uVar4);
  __divsf3(local_34,uVar4);
  __divsf3(local_30,uVar4);
  uVar6 = __divsf3(local_2c,uVar4);
  CCRect::CCRect(aCStack_28,(float)uVar6,(float)((ulonglong)uVar6 >> 0x20),extraout_s2,extraout_s3);
  memcpy(&local_38,aCStack_28,0x10);
  uVar4 = __mulsf3(param_2[1],*(undefined4 *)(this + 0x110));
  __addsf3(uVar4,*param_2);
  uVar4 = __fixsfsi();
  this_00 = *(CCSprite **)(this + 0x14c);
  if (this_00 == (CCSprite *)0x0) {
    this_00 = (CCSprite *)operator_new(0x1c8);
    CCSprite::CCSprite(this_00);
    *(CCSprite **)(this + 0x14c) = this_00;
  }
  CCSprite::initWithBatchNode(this_00,(CCSpriteBatchNode *)this,&local_38);
  piVar5 = *(int **)(this + 0x14c);
  pcVar2 = *(code **)(*piVar5 + 0x3c);
  positionAt(aCStack_40,(CCPoint *)this);
  (*pcVar2)(piVar5,aCStack_40);
  piVar5 = *(int **)(this + 0x14c);
  pcVar2 = *(code **)(*piVar5 + 0x1c);
  vertexZForPos((CCPoint *)this);
  uVar1 = __floatsisf();
  (*pcVar2)(piVar5,uVar1);
  (**(code **)(**(int **)(this + 0x14c) + 0x74))(*(int **)(this + 0x14c),DAT_0016411c + 0x1640f0);
  (**(code **)(**(int **)(this + 0x14c) + 0xec))(*(int **)(this + 0x14c),this[0x134]);
  uVar3 = **(uint **)(this + 0x150);
  CCSpriteBatchNode::addQuadFromSprite((CCSpriteBatchNode *)this,*(CCSprite **)(this + 0x14c),uVar3)
  ;
  FUN_00163af6(*(undefined4 *)(this + 0x150),uVar4,uVar3);
  return *(undefined4 *)(this + 0x14c);
}


