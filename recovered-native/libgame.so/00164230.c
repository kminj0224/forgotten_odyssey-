/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 00164230  Symbol: insertTileForGID */

/* cocos2d::CCTMXLayer::insertTileForGID(unsigned int, cocos2d::CCPoint const&) */

undefined4 __thiscall
cocos2d::CCTMXLayer::insertTileForGID(CCTMXLayer *this,uint param_1,CCPoint *param_2)

{
  int iVar1;
  CCSprite *this_00;
  uint uVar2;
  int iVar3;
  int *piVar4;
  code *pcVar5;
  undefined4 uVar6;
  int *piVar7;
  undefined8 uVar8;
  float extraout_s2;
  float extraout_s3;
  CCTMXLayer aCStack_40 [8];
  CCRect local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  CCRect aCStack_28 [20];
  
  CCTMXTilesetInfo::rectForGID((uint)&local_38);
  uVar6 = *(undefined4 *)(this + 0x154);
  __divsf3(local_38,uVar6);
  __divsf3(local_34,uVar6);
  __divsf3(local_30,uVar6);
  uVar8 = __divsf3(local_2c,uVar6);
  CCRect::CCRect(aCStack_28,(float)uVar8,(float)((ulonglong)uVar8 >> 0x20),extraout_s2,extraout_s3);
  memcpy(&local_38,aCStack_28,0x10);
  uVar6 = __mulsf3(param_2[1],*(undefined4 *)(this + 0x110));
  __addsf3(uVar6,*param_2);
  iVar1 = __fixsfsi();
  this_00 = *(CCSprite **)(this + 0x14c);
  if (this_00 == (CCSprite *)0x0) {
    this_00 = (CCSprite *)operator_new(0x1c8);
    CCSprite::CCSprite(this_00);
    *(CCSprite **)(this + 0x14c) = this_00;
  }
  CCSprite::initWithBatchNode(this_00,(CCSpriteBatchNode *)this,&local_38);
  piVar7 = *(int **)(this + 0x14c);
  pcVar5 = *(code **)(*piVar7 + 0x44);
  positionAt(aCStack_40,(CCPoint *)this);
  (*pcVar5)(piVar7,aCStack_40);
  piVar7 = *(int **)(this + 0x14c);
  pcVar5 = *(code **)(*piVar7 + 0x1c);
  vertexZForPos((CCPoint *)this);
  uVar6 = __floatsisf();
  (*pcVar5)(piVar7,uVar6);
  (**(code **)(**(int **)(this + 0x14c) + 0x74))(*(int **)(this + 0x14c),DAT_00164380 + 0x164304);
  (**(code **)(**(int **)(this + 0x14c) + 0xec))(*(int **)(this + 0x14c),this[0x134]);
  uVar2 = atlasIndexForNewZ(this,iVar1);
  CCSpriteBatchNode::addQuadFromSprite((CCSpriteBatchNode *)this,*(CCSprite **)(this + 0x14c),uVar2)
  ;
  FUN_00163af6(*(undefined4 *)(this + 0x150),iVar1,uVar2);
  if (((*(CCArray **)(this + 0x40) != (CCArray *)0x0) &&
      (iVar3 = CCArray::count(*(CCArray **)(this + 0x40)), iVar3 != 0)) &&
     (*(int *)(this + 0x40) != 0)) {
    piVar7 = *(int **)(*(int *)(this + 0x40) + 0x14);
    iVar3 = *piVar7;
    if (iVar3 != 0) {
      piVar4 = (int *)piVar7[2];
      piVar7 = piVar4 + iVar3 + -1;
      while (piVar4 <= piVar7) {
        iVar3 = *piVar4;
        piVar4 = piVar4 + 1;
        if (iVar3 == 0) break;
        if (uVar2 <= *(uint *)(iVar3 + 0x10c)) {
          *(uint *)(iVar3 + 0x10c) = *(uint *)(iVar3 + 0x10c) + 1;
        }
      }
    }
  }
  *(uint *)(iVar1 * 4 + *(int *)(this + 0x120)) = param_1;
  return *(undefined4 *)(this + 0x14c);
}


