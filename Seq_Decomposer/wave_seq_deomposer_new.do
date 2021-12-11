onerror {resume}
quietly WaveActivateNextPane {} 0
add wave -noupdate -radix decimal /test_SEQ_DECOMPOSER/clk
add wave -noupdate -radix decimal /test_SEQ_DECOMPOSER/dclk
add wave -noupdate -radix decimal /test_SEQ_DECOMPOSER/rst
add wave -noupdate -color Blue -format Analog-Step -height 60 -max 8191.0 -min -8192.0 -radix decimal /test_SEQ_DECOMPOSER/Va
add wave -noupdate -color Red -format Analog-Step -height 60 -max 8191.0 -min -8192.0 -radix decimal /test_SEQ_DECOMPOSER/Vb
add wave -noupdate -color Yellow -format Analog-Step -height 60 -max 8191.0 -min -8192.0 -radix decimal /test_SEQ_DECOMPOSER/Vc
add wave -noupdate -color Blue -format Analog-Step -height 74 -max 8189.9999999999991 -min -8190.0 -radix decimal /test_SEQ_DECOMPOSER/Va_filtered
add wave -noupdate -color Red -format Analog-Step -height 74 -max 8189.9999999999991 -min -8190.0 -radix decimal /test_SEQ_DECOMPOSER/Vb_filtered
add wave -noupdate -color Yellow -format Analog-Step -height 74 -max 8189.9999999999991 -min -8190.0 -radix decimal /test_SEQ_DECOMPOSER/Vc_filtered
add wave -noupdate -color Cyan -format Analog-Step -height 60 -max 8191.0 -min -8192.0 -radix decimal /test_SEQ_DECOMPOSER/Vzero
add wave -noupdate -color Green -format Analog-Step -height 60 -max 8191.0 -min -8192.0 -radix decimal /test_SEQ_DECOMPOSER/Vpos
add wave -noupdate -color Blue -format Analog-Step -height 60 -max 8191.0 -min -8192.0 -radix decimal /test_SEQ_DECOMPOSER/Vneg
add wave -noupdate -radix unsigned /test_SEQ_DECOMPOSER/Vref_freq
add wave -noupdate -radix decimal /test_SEQ_DECOMPOSER/k
add wave -noupdate -radix decimal /test_SEQ_DECOMPOSER/Vzero_amp
add wave -noupdate -radix decimal /test_SEQ_DECOMPOSER/Vzero_freq
add wave -noupdate -radix decimal /test_SEQ_DECOMPOSER/Vzero_phase
add wave -noupdate -radix decimal /test_SEQ_DECOMPOSER/Vpos_amp
add wave -noupdate -radix decimal /test_SEQ_DECOMPOSER/Vpos_freq
add wave -noupdate -radix decimal /test_SEQ_DECOMPOSER/Vpos_phase
add wave -noupdate -radix decimal /test_SEQ_DECOMPOSER/Vneg_amp
add wave -noupdate -radix decimal /test_SEQ_DECOMPOSER/Vneg_freq
add wave -noupdate -radix decimal /test_SEQ_DECOMPOSER/Vneg_phase
TreeUpdate [SetDefaultTree]
WaveRestoreCursors {{Cursor 1} {905500 ps} 0}
quietly wave cursor active 1
configure wave -namecolwidth 256
configure wave -valuecolwidth 98
configure wave -justifyvalue left
configure wave -signalnamewidth 0
configure wave -snapdistance 10
configure wave -datasetprefix 0
configure wave -rowmargin 4
configure wave -childrowmargin 2
configure wave -gridoffset 0
configure wave -gridperiod 1
configure wave -griddelta 40
configure wave -timeline 0
configure wave -timelineunits ps
update
WaveRestoreZoom {0 ps} {2605855 ps}
