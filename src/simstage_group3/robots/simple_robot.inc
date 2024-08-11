define laser ranger(
	sensor(
		range [0.0 5.6]
		fov 240.0
		samples 240
	)

	color "blue"
	size [0.06 0.06 0.06]

	block(
		points 4
		point[0] [0 0]
		point[1] [0 1]
		point[2] [1 1]
		point[3] [1 0]
		z [0 1]
	)
)

define simple_robot position(
    odom_error [0.03 0.03 0.00 0.05]
    localization "lidar"
    size [1.0 0.8 0.6]
    gui_nose 1
    drive "hover"
    color "electric blue"

    laser(
        pose [0.5 0.4 0.3 0.0]
        sensor(
            range [0.0 5.6]
            fov 240.0
            samples 240
        )
        color "blue"
        size [0.06 0.06 0.06]
        block(
            points 4
            point[0] [0 0]
            point[1] [0 1]
            point[2] [1 1]
            point[3] [1 0]
            z [0 0.5]
        )
    )

    block(
        points 4
        point[0] [0 0 0]
        point[1] [0 1 0]
        point[2] [1 1 0]
        point[3] [1 0 0]
        z [0 0.5]
    )

    block(
        points 4
        point[0] [0.2 0 0.5]
        point[1] [0.2 0.8 0.5]
        point[2] [1.2 0.8 0.5]
        point[3] [1.2 0 0.5]
        z [0.5 1.0]
    )

    block(
        points 4
        point[0] [0.4 0.2 1.0]
        point[1] [0.4 1 1.0]
        point[2] [1.4 1 1.0]
        point[3] [1.4 0.2 1.0]
        z [1.0 1.5]
    )
)

