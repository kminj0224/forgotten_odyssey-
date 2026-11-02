/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0015dc8c  Symbol: _INIT_140 */

void _INIT_140(float param_1,float param_2)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  float extraout_s2;
  float extraout_s3;
  undefined auStack_14 [8];
  
  iVar1 = DAT_0015dce4;
  uVar4 = cocos2d::CCPoint::CCPoint((CCPoint *)(DAT_0015dce4 + 0x15dc9c),param_1,param_2);
  uVar4 = cocos2d::CCSize::CCSize
                    ((CCSize *)(iVar1 + 0x15dca4),(float)uVar4,(float)((ulonglong)uVar4 >> 0x20));
  puVar2 = (undefined4 *)(DAT_0015dce8 + 0x15dcbe);
  cocos2d::CCRect::CCRect
            ((CCRect *)(iVar1 + 0x15dcac),(float)uVar4,(float)((ulonglong)uVar4 >> 0x20),extraout_s2
             ,extraout_s3);
  uVar3 = *puVar2;
  FUN_001eed40(uVar3,DAT_0015dcec + 0x15dccc,auStack_14);
  FUN_00201240(uVar3,*(undefined4 *)(DAT_0015dcf0 + 0x15dcd8),
               *(undefined4 *)(DAT_0015dcf4 + 0x15dcda));
  return;
}


