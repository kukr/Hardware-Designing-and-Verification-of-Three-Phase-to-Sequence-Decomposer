onerror {resume}
quietly WaveActivateNextPane {} 0
add wave -noupdate -radix binary /test_DC_offset_removal/clk
add wave -noupdate -radix binary /test_DC_offset_removal/rst
add wave -noupdate -format Analog-Step -height 74 -max 2812.0000000000005 -min -3464.0 -radix decimal /test_DC_offset_removal/Vin
add wave -noupdate -format Analog-Step -height 74 -max 3135.0 -min -3457.0 -radix decimal /test_DC_offset_removal/Vout
TreeUpdate [SetDefaultTree]
WaveRestoreCursors {{Cursor 1} {0 ps} 0}
quietly wave cursor active 0
configure wave -namecolwidth 218
configure wave -valuecolwidth 100
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
WaveRestoreZoom {0 ps} {1050 ns}
