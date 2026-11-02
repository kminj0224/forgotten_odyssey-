/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0015f5dc  Symbol: unzReadCurrentFile */

/* cocos2d::unzReadCurrentFile(void*, void*, unsigned int) */

int cocos2d::unzReadCurrentFile(void *param_1,void *param_2,uint param_3)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  int *piVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  uint in_stack_ffffffac;
  int local_28;
  
  if ((param_1 == (void *)0x0) || (piVar4 = *(int **)((int)param_1 + 0xe0), piVar4 == (int *)0x0)) {
    iVar3 = 0x66;
  }
  else {
    if (*piVar4 != 0) {
      if (param_3 == 0) {
        return 0;
      }
      piVar4[4] = (int)param_2;
      piVar4[5] = param_3;
      if (((piVar4[0x21] == 0) && ((uint)piVar4[0x20] < param_3)) && (piVar4[0x32] == 0)) {
        piVar4[5] = piVar4[0x20];
      }
      uVar1 = piVar4[2];
      uVar5 = piVar4[0x1e];
      if (((piVar4[0x1f] + (uint)CARRY4(uVar1,uVar5) == 0) && (uVar1 + uVar5 < param_3)) &&
         (piVar4[0x32] != 0)) {
        piVar4[5] = uVar1 + uVar5;
      }
      local_28 = 0;
      do {
        if (piVar4[5] == 0) {
          return local_28;
        }
        if (piVar4[2] == 0) {
          uVar1 = piVar4[0x1e];
          if ((uVar1 | piVar4[0x1f]) != 0) {
            if ((piVar4[0x1f] != 0) || (DAT_0015f81c < uVar1)) {
              uVar1 = 0x4000;
            }
            iVar3 = call_zseek64((cocos2d *)(piVar4 + 0x22),(zlib_filefunc64_32_def_s *)piVar4[0x2d]
                                 ,(void *)(piVar4[0x30] + piVar4[0x10]),
                                 (ulonglong)in_stack_ffffffac << 0x20,
                                 piVar4[0x31] + piVar4[0x11] +
                                 (uint)CARRY4(piVar4[0x30],piVar4[0x10]));
            if ((iVar3 != 0) ||
               (uVar5 = (*(code *)piVar4[0x23])
                                  (piVar4[0x29],(zlib_filefunc64_32_def_s *)piVar4[0x2d],*piVar4,
                                   uVar1), uVar5 != uVar1)) {
              iVar3 = 1;
              goto LAB_0015f80e;
            }
            uVar5 = piVar4[0x10];
            piVar4[0x10] = uVar5 + uVar1;
            piVar4[0x11] = piVar4[0x11] + (uint)CARRY4(uVar5,uVar1);
            uVar5 = piVar4[0x1e];
            piVar4[0x1e] = uVar5 - uVar1;
            piVar4[0x1f] = piVar4[0x1f] - (uint)(uVar5 < uVar1);
            piVar4[2] = uVar1;
            piVar4[1] = *piVar4;
          }
        }
        if ((piVar4[0x2e] == 0) || (piVar4[0x32] != 0)) {
          uVar1 = piVar4[2];
          if ((uVar1 == 0) && ((piVar4[0x1e] | piVar4[0x1f]) == 0)) {
            return local_28;
          }
          uVar5 = piVar4[5];
          if (uVar1 < (uint)piVar4[5]) {
            uVar5 = uVar1;
          }
          for (uVar1 = 0; uVar1 != uVar5; uVar1 = uVar1 + 1) {
            *(undefined *)(piVar4[4] + uVar1) = *(undefined *)(piVar4[1] + uVar1);
          }
          uVar5 = piVar4[0x1a];
          piVar4[0x1a] = uVar5 + uVar1;
          piVar4[0x1b] = piVar4[0x1b] + (uint)CARRY4(uVar5,uVar1);
          iVar3 = crc32(piVar4[0x1c],piVar4[4],uVar1);
          piVar4[0x1c] = iVar3;
          uVar5 = piVar4[0x20];
          piVar4[0x20] = uVar5 - uVar1;
          piVar4[0x21] = piVar4[0x21] - (uint)(uVar5 < uVar1);
          piVar4[2] = piVar4[2] - uVar1;
          local_28 = local_28 + uVar1;
          piVar4[5] = piVar4[5] - uVar1;
          piVar4[4] = piVar4[4] + uVar1;
          piVar4[1] = piVar4[1] + uVar1;
          piVar4[6] = piVar4[6] + uVar1;
        }
        else if (piVar4[0x2e] != 0xc) {
          uVar1 = piVar4[6];
          iVar6 = piVar4[4];
          iVar3 = inflate(piVar4 + 1,2);
          if ((-1 < iVar3) && (piVar4[7] != 0)) {
            iVar3 = -3;
          }
          uVar7 = piVar4[6];
          uVar5 = uVar7 - uVar1;
          uVar2 = piVar4[0x1a];
          piVar4[0x1a] = uVar2 + uVar5;
          piVar4[0x1b] = (piVar4[0x1b] - (uint)(uVar7 < uVar1)) + (uint)CARRY4(uVar2,uVar5);
          iVar6 = crc32(piVar4[0x1c],iVar6,uVar5);
          piVar4[0x1c] = iVar6;
          uVar2 = piVar4[0x20];
          piVar4[0x20] = uVar2 - uVar5;
          piVar4[0x21] = (piVar4[0x21] + (uint)(uVar7 < uVar1)) - (uint)(uVar2 < uVar5);
          local_28 = local_28 + (uVar7 - uVar1);
          if (iVar3 == 1) {
            return local_28;
          }
          if (iVar3 != 0) {
            return iVar3;
          }
        }
      } while( true );
    }
    iVar3 = 100;
  }
LAB_0015f80e:
  return -iVar3;
}


