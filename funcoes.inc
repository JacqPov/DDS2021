<?php

	function ler_dados_pet(){
		$_SESSION["especie"][] = $_POST["especie"];
		$_SESSION["nome"][] = $_POST["nome"];
		$_SESSION["idade"][] = $_POST["idade"];
		$_SESSION["sexo"][] = $_POST["sexo"];
		
		echo "<article> 

				<center>
				<h2> Pet cadastrado com sucesso!!! </h2> 
				</center>

				<br>
				<br>
				<br>
				<br>
				<br>
			</article>";


	}