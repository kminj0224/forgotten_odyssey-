/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 001abf2a  Symbol: FUN_001abf2a */

void FUN_001abf2a(void)

{
  byte bVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  byte *pbVar5;
  int iVar6;
  undefined4 uVar7;
  int *unaff_r4;
  byte *unaff_r5;
  byte *unaff_r6;
  byte **unaff_r7;
  int *unaff_r8;
  void *unaff_r9;
  int *unaff_r10;
  undefined4 *in_stack_00000004;
  uint in_stack_00000008;
  int in_stack_00000010;
  byte *in_stack_00000018;
  byte *in_stack_0000001c;
  
code_r0x001abf2a:
  *(undefined4 *)(*unaff_r4 + 0x14) = 0x57;
  (**(code **)(*unaff_r4 + 4))(unaff_r4,1);
  unaff_r4[0x6d] = 0;
  FUN_001ab610(2);
  do {
    if ((int)unaff_r10 < 0x101) goto LAB_001abe64;
    do {
      *(undefined4 *)(*unaff_r8 + 0x14) = 9;
      (**(code **)*unaff_r8)(unaff_r8);
LAB_001abe64:
      if (unaff_r10 != (int *)0x0) {
        iVar6 = 0;
        do {
          while (unaff_r5 == (byte *)0x0) {
            iVar2 = (*(code *)unaff_r7[3])(unaff_r8);
            if (iVar2 == 0) {
              FUN_001ab60e();
            }
            unaff_r5 = unaff_r7[1] + -1;
            unaff_r6 = *unaff_r7 + 1;
            *(byte *)((int)unaff_r9 + iVar6) = **unaff_r7;
            iVar6 = iVar6 + 1;
            if ((int)unaff_r10 <= iVar6) goto LAB_001abeb4;
          }
          bVar1 = *unaff_r6;
          unaff_r5 = unaff_r5 + -1;
          unaff_r6 = unaff_r6 + 1;
          *(byte *)((int)unaff_r9 + iVar6) = bVar1;
          iVar6 = iVar6 + 1;
        } while (iVar6 < (int)unaff_r10);
      }
LAB_001abeb4:
      in_stack_00000010 = in_stack_00000010 - (int)unaff_r10;
      if ((int)(in_stack_00000008 << 0x1b) < 0) {
        iVar6 = in_stack_00000008 + 0x20;
        in_stack_00000008 = in_stack_00000008 - 0x10;
      }
      else {
        iVar6 = in_stack_00000008 + 0x2c;
      }
      unaff_r10 = unaff_r8 + iVar6 + 1;
      if (3 < in_stack_00000008) {
        *(undefined4 *)(*unaff_r8 + 0x14) = 0x1f;
        *(uint *)(*unaff_r8 + 0x18) = in_stack_00000008;
        (**(code **)*unaff_r8)(unaff_r8);
      }
      puVar4 = (undefined4 *)*unaff_r10;
      if (puVar4 == (undefined4 *)0x0) {
        puVar4 = (undefined4 *)jpeg_alloc_huff_table(unaff_r8);
        *unaff_r10 = (int)puVar4;
      }
      uVar3 = in_stack_00000004[1];
      uVar7 = in_stack_00000004[2];
      *puVar4 = *in_stack_00000004;
      puVar4[1] = uVar3;
      puVar4[2] = uVar7;
      puVar4[3] = in_stack_00000004[3];
      *(undefined *)(puVar4 + 4) = *(undefined *)(in_stack_00000004 + 4);
      memcpy((void *)(*unaff_r10 + 0x11),unaff_r9,0x100);
      if (in_stack_00000010 < 0x11) {
        if (in_stack_00000010 != 0) {
          *(undefined4 *)(*unaff_r8 + 0x14) = 0xc;
          (**(code **)*unaff_r8)(unaff_r8);
        }
        *unaff_r7 = unaff_r6;
        unaff_r7[1] = unaff_r5;
        FUN_001ab588();
        unaff_r4 = unaff_r8;
        goto code_r0x001abf2a;
      }
      if (unaff_r5 == (byte *)0x0) {
        iVar6 = (*(code *)unaff_r7[3])(unaff_r8);
        if (iVar6 == 0) {
          FUN_001ab60e();
          return;
        }
        unaff_r6 = *unaff_r7;
        unaff_r5 = unaff_r7[1];
      }
      in_stack_00000008 = (uint)*unaff_r6;
      unaff_r5 = unaff_r5 + -1;
      *(undefined4 *)(*unaff_r8 + 0x14) = 0x52;
      unaff_r6 = unaff_r6 + 1;
      *(uint *)(*unaff_r8 + 0x18) = in_stack_00000008;
      (**(code **)(*unaff_r8 + 4))(unaff_r8,1);
      *(undefined *)in_stack_00000004 = 0;
      unaff_r10 = (int *)0x0;
      pbVar5 = in_stack_00000018;
      do {
        while (unaff_r5 == (byte *)0x0) {
          iVar6 = (*(code *)unaff_r7[3])(unaff_r8);
          if (iVar6 == 0) {
            FUN_001ab60e();
            return;
          }
          bVar1 = **unaff_r7;
          unaff_r5 = unaff_r7[1] + -1;
          unaff_r6 = *unaff_r7 + 1;
          *pbVar5 = bVar1;
          pbVar5 = pbVar5 + 1;
          unaff_r10 = (int *)((int)unaff_r10 + (uint)bVar1);
          if (pbVar5 == in_stack_0000001c) goto LAB_001abdca;
        }
        bVar1 = *unaff_r6;
        unaff_r5 = unaff_r5 + -1;
        unaff_r6 = unaff_r6 + 1;
        *pbVar5 = bVar1;
        pbVar5 = pbVar5 + 1;
        unaff_r10 = (int *)((int)unaff_r10 + (uint)bVar1);
      } while (pbVar5 != in_stack_0000001c);
LAB_001abdca:
      in_stack_00000010 = in_stack_00000010 + -0x11;
      iVar6 = *unaff_r8;
      *(uint *)(iVar6 + 0x18) = (uint)*(byte *)((int)in_stack_00000004 + 1);
      *(uint *)(iVar6 + 0x1c) = (uint)*(byte *)((int)in_stack_00000004 + 2);
      *(uint *)(iVar6 + 0x20) = (uint)*(byte *)((int)in_stack_00000004 + 3);
      *(uint *)(iVar6 + 0x24) = (uint)*(byte *)(in_stack_00000004 + 1);
      *(uint *)(iVar6 + 0x28) = (uint)*(byte *)((int)in_stack_00000004 + 5);
      *(uint *)(iVar6 + 0x2c) = (uint)*(byte *)((int)in_stack_00000004 + 6);
      *(uint *)(iVar6 + 0x30) = (uint)*(byte *)((int)in_stack_00000004 + 7);
      *(uint *)(iVar6 + 0x34) = (uint)*(byte *)(in_stack_00000004 + 2);
      *(undefined4 *)(*unaff_r8 + 0x14) = 0x58;
      (**(code **)(*unaff_r8 + 4))(unaff_r8,2);
      iVar6 = *unaff_r8;
      *(uint *)(iVar6 + 0x18) = (uint)*(byte *)((int)in_stack_00000004 + 9);
      *(uint *)(iVar6 + 0x1c) = (uint)*(byte *)((int)in_stack_00000004 + 10);
      *(uint *)(iVar6 + 0x20) = (uint)*(byte *)((int)in_stack_00000004 + 0xb);
      *(uint *)(iVar6 + 0x24) = (uint)*(byte *)(in_stack_00000004 + 3);
      *(uint *)(iVar6 + 0x28) = (uint)*(byte *)((int)in_stack_00000004 + 0xd);
      *(uint *)(iVar6 + 0x2c) = (uint)*(byte *)((int)in_stack_00000004 + 0xe);
      *(uint *)(iVar6 + 0x30) = (uint)*(byte *)((int)in_stack_00000004 + 0xf);
      *(uint *)(iVar6 + 0x34) = (uint)*(byte *)(in_stack_00000004 + 4);
      *(undefined4 *)(*unaff_r8 + 0x14) = 0x58;
      (**(code **)(*unaff_r8 + 4))(unaff_r8,2);
    } while (in_stack_00000010 < (int)unaff_r10);
  } while( true );
}


